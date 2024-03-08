#include <iostream>
using namespace std;

int main()
{  	
    const float tax = 0.1;      // 10% tax
	const float TV_price = 1400.00;
	const float DVD_price = 220.00;
	const float Remote_Controller_price = 35.20;
   	
    int TV, DVD, Remote_Controller;
    float price, subtotal, total, extTV=0, extDVD=0, extRemote_Controller=0,tax_deduct;
      
    cout << "How Many TVs Were Sold?: ";
    cin >> TV;
      
    cout << "How Many DVDs Were Sold?: ";
    cin >> DVD;
      
    cout << "How Many Remote Controllers Were Sold?: ";
    cin >> Remote_Controller;
          
      
   	extTV = TV * TV_price;
    extDVD = DVD * DVD_price;
    extRemote_Controller = Remote_Controller * Remote_Controller_price;
   
    subtotal = extTV + extDVD +extRemote_Controller ;   
    tax_deduct= tax*subtotal;
    total = subtotal + tax_deduct;
        
    cout << "\n QTY   DESCRIPTION       UNIT PRICE  TOTAL PRICE ";
    cout << "\n ===   ===========       ==========  =========== ";
     
    cout << "\n  "<< TV <<"       TV             $1400.00      "<<  extTV<<"        ";
    cout << "\n  "<< DVD <<"       DVD            $220.00       "<<extDVD <<"        ";
    cout << "\n  "<<Remote_Controller <<"  Remote Controller   $35.20        "<< extRemote_Controller<<"        ";
      
    cout << "\n    -----------  " ;            
    cout << "\n       SUBTOTAL         "<< "$" <<subtotal<<"        ";                                            
    cout << "\n         TAX            "<< "$" <<tax_deduct<<"        ";
    cout << "\n        TOTAL           "<< "$" <<total<<"        ";  

	return 0;
}
