import java.util.Random;
import java.util.Scanner;

public class Library {
	private String libraryName;
	private Book[] bookList;
	private static int nbBooks;
	public static final int MAX_NUMBERS_BOOKS = 100;

	public Library(String libraryName) {
		super();
		this.libraryName = libraryName;
		this.bookList = new Book[MAX_NUMBERS_BOOKS];
		nbBooks = 0;
	}

	public void addNewBook() {
//		System.out.println("2. Add New Book");
//		System.out.println("--------------------");
		// Nhap thong tin dau sach

		if (nbBooks < 100) {
			System.out.print("(1) Book ID: ");
			Scanner in = new Scanner(System.in);
			int bookID = Integer.valueOf(in.nextLine());
			for (int i = 0; i < nbBooks; i++)
				if (bookList[i].getBookID() == bookID) {
					System.out.println("The book is esxisted. Please try again");
					return;
				}
			System.out.print("(2) Book Title: ");
			String bookTitle = in.nextLine();
			System.out.print("(3) Book Amount: ");
			int amount = Integer.valueOf(in.nextLine());
			bookList[nbBooks] = new Book(bookID, bookTitle, amount);
			nbBooks++;
		} else
			System.out.println("Library is full");

	}

	public boolean findBook(int bookID) {
//		System.out.println("3. Find Book");
//		System.out.println("--------------------");
		for (int i = 0; i < nbBooks; i++)
			if (bookList[i].getBookID() == bookID) {
				bookList[i].showBookInfo();
				return true;
			}
		return false;
	}

	public void borrowBook(int bookID) {
//		System.out.println("------------------------------");
//		System.out.println("4. Borrow a Book");
//		System.out.println("------------------------------");
		for (int i = 0; i < nbBooks; i++)
			if (bookList[i].getBookID() == bookID) {
				
				bookList[i].showBookInfo();
				if (bookList[i].getAvailable() > 0) {
					bookList[i].setAvailable(bookList[i].getAvailable() - 1);
					System.out.println("The book is borrowed successfully!");
					bookList[i].showBookInfo();
				}
				else System.out.println("Can't borrow");
			}
		System.out.println("Not found book");
	}

	public void returnBook(int bookID) {
//		System.out.println("------------------------------");
//		System.out.println("5. Return a Book");
//		System.out.println("------------------------------");
		for (int i = 0; i < nbBooks; i++)
			if (bookList[i].getBookID() == bookID) {
				bookList[i].setAvailable(bookList[i].getAvailable() + 1);
				System.out.println("The book is returned successfully!");
				bookList[i].showBookInfo();
			}
	}

	public void showLibraryInfo() {
//		System.out.println("------------------------------");
//		System.out.println("1. Show Library's Information");
//		System.out.println("------------------------------");
		if (nbBooks > 0) {
			System.out.println("Library's Name: " + libraryName);
			System.out.println("Number of Books: " + nbBooks);
			for (int i = 0; i < nbBooks; i++) {
				System.out.println();
				bookList[i].showBookInfo();
			}
		} else
			System.out.println("Library is empty");
	}

	public boolean findBook(String keyword) {
		int count = 0;
		for (int i = 0; i < nbBooks; i++)
			if (bookList[i].getBookTitle().indexOf(keyword) >= 0) {
				count++;
			}

		if (count != 0) {
			System.out.println("The book is found successfully!");
			System.out.println("Number of books found: " + count);
			for (int i = 0; i < nbBooks; i++)
				if (bookList[i].getBookTitle().indexOf(keyword) >= 0) {
					bookList[i].showBookInfo();
				}
			return true;
		}
		return false;
	}

	public Book getALuckyBook() {
		Random random = new Random();
		int index = random.nextInt(nbBooks);
		System.out.println("Got a lucky book");
		bookList[index].setAmount(bookList[index].getAmount() - 1);
		bookList[index].setAvailable(bookList[index].getAvailable() - 1);
		return bookList[index];
	}

	public static void main(String[] args) {
		Library library = new Library("Bach Khoa Library");
		library.addNewBook();
//		library.addNewBook();
//		library.addNewBook();
//		library.findBook(123);
//		library.borrowBook(123);
		library.returnBook(123);
//		library.returnBook(123);
//		library.returnBook(123);
//		System.out.println(library.findBook("java"));
//		library.getALuckyBook().showBookInfo();
//		library.showLibraryInfo();
	}

}
