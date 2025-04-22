#include <iostream>
#include <string>
using namespace std;

/*
int main (){
   float a;
   while (1)
   {
   
   while(1){
   cout<<"Input: "<< endl;
    cin >> a;
   float c = a + 0.5 ;
   int b=c;
   cout << b<<endl;
   }
}
}
*/


class book
{
    private:
    string title;
    int pages;
    string author = "peter";
    private:
    float price;
    public:
    string publisher;
    
   

        void displayAuthorInfo() {
            cout << "Author: " << author << endl;
            cout << "Title: " << title << endl;
            cout << "Pages: " << pages << endl;
            cout << "Price: $" << price << endl;
            cout << "Publisher: " << publisher << endl;
        }
};

int main(){
	book booka;
	//booka.title = "tesi";
	//cout << book.title << endl;
	//book1.publisher = "testi";
	//cout << booka.publisher << endl;
	//booka.displayAuthorInfo();

}