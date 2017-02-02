public class TVActorDriver {
	public static void main( String[] args ) {
		TVActor a = new TVActor();
		a.name = "Thomas Middleditch";
		a.role = "Richard Hendricks";
		a.age = 31;

		TVActor b = new TVActor();
		b.name = "Martin Starr";
		b.role = "Bertram Gilfoyle";
		b.age = 45;

		TVActor c = new TVActor();
		c.name = "Kumail Nanjiani";
		c.role = "Dinesh Chugtai";
		c.age = 51;

		System.out.println( a.name + " played " + a.role + " and he is " + a.age );
		System.out.println( b.name + " played " + b.role + " and he is " + b.age );
		System.out.println( c.name + " played " + c.role + " and he is " + c.age );
	}
}
