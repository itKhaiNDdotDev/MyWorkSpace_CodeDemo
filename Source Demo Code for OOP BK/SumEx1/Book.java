package SumEx1;

public class Book
{
	private int bookID;
	private String bookTitle;
	private int amount;
	private int available;

	public Book()
	{
		bookID = 0;
		bookTitle = NULL;
		amount = 0;
		available = 0;
	}

	public Book(int bookID, String bookTitle, int amount)
	{
		super();
		this.bookID = bookID;
		this.bookTitle = bookTitle;
		this.amount = amount;
		this.available = amount;
	}

	public void showBookInfo()
	{
		System.out.println("Book Title: " + bookTitle);
		System.out.println("Book ID: " + bookID);
		System.out.println("Total Amount: " + amount);
		System.out.println("Available: " + available);
	}

	public int getBookID()
	{
		return bookID;
	}

	public void setBookID(int bookID)
	{
		this.bookID = bookID;
	}

	public String getBookTitle()
	{
		return bookTitle;
	}

	public void setBookTitle(String bookTitle)
	{
		this.bookTitle = bookTitle;
	}

	public int getAmount()
	{
		return amount;
	}

	public void setAmount(int amount)
	{
		this.amount = amount;
	}

	public int getAvailable()
	{
		return available;
	}

	public void setAvailable(int available)
	{
		this.available = available;
	}
}
