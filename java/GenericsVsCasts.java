import java.util.ArrayList;

public class GenericsVsCasts {

	@SupressWarnings("unchecked")
	public static void main( String[] args ) {
		ArrayList objarr = new ArrayList();

		objarr.add("one");
		objarr.add("two");

		Object aa = objarr.get(0);
		Object bb = objarr.get(1);

		// At this point, we have
		// Identifier    address    type								initialized
		// ----------    -------    ------------						-----------
		// objarr		@12a020b0   refernce to ArrayList of Objects    yes
		// aa			@12a020a8   reference to Object					yes
		// bb			@12a020a0	reference to Object					yes
		//
		// The Heap 
		// objarr
		// 0		1
		// --		--
		// @a58		@980
		// "one"	"two"
		//
		// The Stack
		// @12a020b0	- @f98
		// @12a020a8	- @a58
		// @12a020a0	- @980
		//
		//

		// String qq = objarr.get(0); // won't work
		// String rr = objarr.get(1);
		//
		String ss = (String)objarr.get(0);
		String tt = (String)objarr.get(1);

		System.out.println(objarr);

		//---------------------------------
		ArrayList<String> strarr = new ArrayList<>();
		strarr.add("one");
		strarr.add("two");

		String s = strarr.get(0);
		String t = strarr.get(1);

		System.out.println(strarr);

		Object a = strarr.get(0); // this also works, because Strings are Objects
		Object b = strarr.get(1);

		//----------------------------------
		Integer i = new Integer(123);
		objarr.add(1);

		System.out.println(objarr); // ["one", "two", 123] !!!
	}
}
