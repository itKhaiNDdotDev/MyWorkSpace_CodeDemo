import java.util.Scanner;

public class Program {
	
	private static int option;
	
	public static void showMenu() {
		System.out.println("========== Menu ===========");
		System.out.println("1. Show library information");
		System.out.println("2. Add new book");
		System.out.println("3. Find book");
		System.out.println("4. Borrow a book");
		System.out.println("5. Return a book");
		System.out.println("6. Exit");
	}
	
	public static void askOption() {
		System.out.println("===========================");
		System.out.print("Enter menu ID (1-6): ");
		Scanner inp = new Scanner(System.in);
		option = Integer.parseInt(inp.nextLine());
	}

	public static void main(String[] args) {
		Library library = new Library("TQB Library");
		showMenu();
		while (true) {
			askOption();
			
			switch (option) {
				case 1:{
					library.showLibraryInfo();
					break;
				}
				case 2:{

					System.out.println("2. Add New Book");
					System.out.println("--------------------");				
					library.addNewBook();
					break;
				}
				case 3:{
					System.out.println("3. Find book");
					System.out.println("--------------------");
					System.out.print("Enter book's ID: ");
					Scanner in = new Scanner(System.in);
 					int bookID = Integer.parseInt(in.nextLine());
 					System.out.println(library.findBook(bookID));
					break;
				}
				case 4:{
					System.out.println("4. Borrow a book");
					System.out.println("--------------------");
					System.out.print("Enter book's ID: ");
					Scanner in = new Scanner(System.in);
 					int bookID = Integer.parseInt(in.nextLine());
 					library.borrowBook(bookID);
					break;
				}

				case 5:{
					System.out.println("5. Return a book");
					System.out.println("--------------------");
					System.out.print("Enter book's ID: ");
					Scanner in = new Scanner(System.in);
 					int bookID = Integer.parseInt(in.nextLine());
 					library.returnBook(bookID);
					break;
				}
				case 6:{
					return;
				}
		
				default:{
					System.out.println("Try again");
					break;
				}
			
			}
		}
	}

}
