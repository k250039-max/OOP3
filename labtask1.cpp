#include<iostream>
using namespace std;
class Book
{
    private:
        string title,author;
        double price;
    public:
        // Book()
        // {
        //     title="Unknown";
        //     author="Anonymous";
        //     price=0.00;
        // }
        Book(string titl="Unknown",string auth="Anonymous",double pric=0.00)
        {
            title=titl;
            author=auth;
            price=pric;
        }
        Book(const Book &b)
         {
            title = b.title;
            author = b.author;
            price = b.price;
        }
        void showdetails()
        {
            cout<<endl<<"Title: "<<title<<endl<<"Author: "<<author<<endl<<"Price: "<<price;
        }
};
int main()
{
    Book b1;
    b1.showdetails();
    Book b3(b1);
    b3.showdetails();
    
}