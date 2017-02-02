import java.io.File; // contains the defintion for object/class called File
import java.util.ArrayList; // all of these imports are modules or libraries, both meaning same thing
import java.util.Random;
import java.util.Scanner;

public class WorkingWithObjects {

	public static void main( String[] args ) throws Exception {
		// instantiate File object and name it f
		// The File object is passed a string
		File f = new File("datafiles/phonetic-alphabet.txt");

		if ( f.exists() == false ) {
			System.out.println( f.getName() + " not found in this folder. :(");
			System.exit(1);
		}

		ArrayList<String> words = new ArrayList<String>();
		Scanner alpha = new Scanner(f);

		System.out.print("Reading words from \"" + f.getPath() + "\"... ");
		while ( alpha.hasNext() ) {
			String w = alpha.next();
			words.add(w);
		}
		alpha.close();
		System.out.print("done.\n\t");

		Random rng = new Random();
		rng.setSeed(12345);
		// rng.setSeed(23213);
		
		for ( int n = 0; n < 3; n++ ) {
			int i = rng.nextInt( words.size() );
			String s = words.get(i);
			System.out.print( s.toLowerCase() + " ");
		}
		System.out.println();
	}
}
