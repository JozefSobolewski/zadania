#include <iostream> 
#include <cmath> 
using namespace std; 

int dodawanie(int x, int y) 
{ 
    return x+y; 
} 

int odejmowanie(int x, int y) 
{
    return x-y; 
} 

int mnozenie(int x, int y) 
{ 
    return x*y; 
} 

int dzielenie(int x, int y) 
{ 
    return x/y; 
} 

int potegowanie(int x, int y) 
{ 
    return pow(x, y); 
} 

int pierwiastekint(int x) 
{ 
    return sqrt(x); 
} 

int main() { 
    int a, b, c; 
    
    cout<<"1-dodawanie 2-odejmowanie 3-mnozenie 4-dzielnienie 5-potegowanie 6-pierwiastkowanie: "; 
    cin>>c;   
    cout<<"podaj a: "; 
    cin>>a; 
    cout<<"poddaj b: "; 
    cin>>b; 

    if (c == 1) 
    { 
        cout<<dodawanie(a, b); 
    }  
    else if (c == 2) 
    { 
        cout<<odejmowanie(a, b); 
    }  
    else if (c == 3) 
    { 
        cout<<mnozenie(a, b); 
    }  
    else if (c == 4) 
    { 
        cout<<dzielenie(a, b); 
    }  
    else if (c == 5) 
    { 
        cout<<potegowanie(a, b); 
    }  
    else if (c == 6)
    { 
        cout<<pierwiastekint(a); 
    }  
    else 
    { 
        cout<<"blomd";
    } 
} 
