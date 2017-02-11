public class DogDriver {
	public static void main( String[] args ) {
		Dog a = new Dog();

		Dog pal = new Dog("Lassie", "Rough Collie", 3, 26);
		Dog spike = new Dog("Yeller", "Mastador", 5, 42);
		Dog princess = new Dog("Princess", "Aussie", 5, 20);

		System.out.println( pal.getName() + " is a " + pal.getBreed() + ".");
		System.out.println( spike.getName() + " is a " + spike.getBreed() + ".");
		System.out.println( princess.getName() + " is a " + princess.getBreed() + " and is " + princess.getAge() + " years old and weighs " + princess.getWeight() + " kg.");

		System.out.println( pal.getEverything() );
		System.out.println( a.getEverything() );
	}
}
