#include<iostream>
using namespace std;

void program1(){
    double x; int y;
    cout << "enter a number: "; cin >> x; cout << endl;
    cout << "enter power: "; cin >> y; cout << endl;
    double output = 1.0;
    for (int z = 1; z <= y; z++){
        output = output * x;
    }
    cout << "outup: " << output << endl;
}

void program2(){
    int number; int digit;
    cout << "enter a number: ";
    cin >> number;
    while(number > 0){
        digit = number%10;
        cout << digit;
        number = number/10;
    }
}

void program3(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void program4(){
    int n = 5;  //number of rows
    for (int i = 1; i <= n; i++){   //outer loop for rows
        for (int j = 1; j <= n - i; j++){ //printing spaces
            cout << " ";
        }
        for (int k = 1; k <= i; k++){ //printing stars
            cout << "*";
        }
        cout << endl; //move yo the next
    }
}

void program5(){
    int n = 5;
    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= a; b++){
            cout << "*";
        }
        cout << endl;
    }
    for (int c = n + 5; c >= 5; c--){
        for (int d = 1; d <= c-5; d++){
            cout << "*";
        }
        cout << endl;
    }
}
//function to calculate factorial
long long factorial(int n){
    long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    char a;
    cin >> a;
    switch(a){
        case '1': 
        program1();
        break;

        case '2':
        program2();
        break;

        case '3':
        program3();
        break;

        case '4':
        program4();
        break;

        case '5':
        program5();
        break;

        case '6':
        double sum = 0.0;
        //calculate the sum of the first seven terms
        for (int i = 1; i <= 3; i++){
            sum += static_cast<double>(i) / factorial(i);
        }
        //Print the result
        cout << "Sum of the series: " << sum << endl;  
        break;
    }
        


    return 0;
}