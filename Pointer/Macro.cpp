#include<iostream>
#define pi 3.14   //marcro.
#define AREA(len,bre) (len*bre);  //read article gfg macro..
#define MIN(a,b) ((a) < (b) ? (a) : (b))
using namespace std;
int main(){

   /*int r = 5;
    // double pi = 3.14;
    double area = pi * r * r;
    cout << "Area is: " << area << endl;
    */


//2nd
   /*int l1 = 10,l2 = 5,area;

   area = AREA(l1,l2);
   cout << "Area is: " << area << endl;
*/


int a = 25,b = 23;
cout << a <<" " << b << "min is: " << MIN(a,b);


    return 0;
}