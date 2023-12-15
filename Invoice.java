public class Invoice{

private String partNumber;
private String partDescription;
private int quantity;
private double pricePerItem;



public Invoice(String pN, String pd, int quantity, double pricePerItem)
{
		partNumber = pN;
	partDescription = pd;
	if(quantity > 0)
	{
	this.quantity = quantity;
	}

	if( pricePerItem >0.0)
	{
	this. pricePerItem = pricePerItem;
	}
	this. pricePerItem = pricePerItem;

	}

	public void setPartNumber(String p)
	{
	partNumber = p;
	}

	public String getPartNumber()
	{
	return partNumber;
	}

	public void setPartDescription(String p)
	{
	partDescription = p;
	}

	public String getPartDescription()
	{
	return partDescription;
	}

	public void setQuantity(int q)
	{
	if(q>0)
	{
	quantity = q;
	}
	else if(q<=0)
	{
	quantity = 0;
	}

	}

	public int getQuantity()
	{
	return quantity;
	}

	public void setPricePerItem(double p)
	{
	if (p>0.0)
	{
	pricePerItem = p;
	}
	else if (p<=0)
	{
	pricePerItem = 0;
	}

}

public Double getPricePerItem()
{
return pricePerItem;
}


public Double getInvoiceAmount()
{
return getQuantity() * getPricePerItem();
}

}
