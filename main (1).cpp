#include <iostream>
using namespace std;


int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    
    int x;
    int type;
    int sum;
    int sub;
    int prod;
    int divid;
    int twoRoot;
    int threeRoot;
    
    cout << "Enter 1 for addition. Enter 2 for subtraction. Enter 3 for multiplication. Enter 4 for division. Enter 5 for Square roots. Enter 6 for Cube roots.  ";
    cin >> x;
    
    if(x==1){
    cout << "Enter the first number! \n";
    cin >> a;
    
    cout << "Enter the second number! \n";
    cin >> b;
    
    sum=a+b;
    cout << "The sum of those numbers is " <<sum;
    return 0;
    }else if(x==2){
    cout << "Enter the first number for subtraction! \n";
    cin >> c;
    
    cout << "Enter the second number for subtraction! \n";
    cin >> d;
    
    sub=c-d;
    cout << "The value of those numbers is " <<sub;
    return 0;
    }else if(x==3){
    cout << "Enter the first number for multiplication! \n";
    cin >> e;
    
    cout << "Enter the second number for multiplication! \n";
    cin >> f;
    
    prod=e*f;
    cout << "The product of those numbers is " <<prod;
    return 0; 
    }else if(x==4){
    cout << "Enter the first number for division! \n";
    cin >> g;
    
    cout << "Enter the second number for division! \n";
    cin >> h;
    
    divid=g/h;
    cout << "The dividend of those numbers is " <<divid;
    return 0; 
    }else if(x==5){
        
    cout << "Enter the first number for it's root! \n";
    cin >> i;
    
    twoRoot=sqrt(i);
    cout << "The root of the number is " <<twoRoot;
        
    }else if(x==5){
        
    cout << "Enter the first number for it's cube root! \n";
    cin >> j;
    
    threeRoot=cbrt(j);
    cout << "The cube root of the number is " <<threeRoot;
        
    }else if(x>6){
        cout << "Please er a number between 1-4.";
        cin >> x;
    }
    
    
    
    
    
}
