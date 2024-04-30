#include<iostream>
#include <bitset>

using namespace std;

// // // /*int main()
// // // {
// // //     int a =27;
// // //     int b= a >> 3;
// // //     int c =27;

// // //     cout << "a=" << bitset<8>(a) << endl;
// // //     cout << "b=" << bitset<8>(b) << endl;
// // //     cout << "c=" << bitset<16>(c) << endl;

// // // }
// // // int main ()
// // // {
// // //     int a = 32;
// // //     int b = a >> 3;
// // //     int c = 258; 

// // //     int d = 1 << 3;
// // //     cout << "d=" << bitset<8>(d) <<" d= "<< d <<endl;
// // //     cout << "256 = " << bitset<16>(256) << endl;
// // //     cout << "255 = " << bitset<16>(255) << endl;
// // // } */
// // // /*int main()
// // // {
// // //     int x = 172;
// // //     int y = x & (x-1);

// // //     cout << "x= " << bitset<16>(x) << endl;
// // //     cout << "y= " << bitset<16>(y) << endl;

// // // }*/

// // // /*int main()
// // // {
// // //     int x = 172;
// // //     int y = x & ~(x-1);

// // //     cout << "x= " << bitset<16>(x) << endl;
// // //     cout << "x= " << bitset<16>(x-1) << endl;
// // //     cout << "y= " << bitset<16>(y) << endl;

// // // }*/

// // // /*int main()
// // // {
// // //     int x = 172;
// // //     int y = x^~(x-1);

// // //     cout << "x= " << bitset<16>(x) << endl;
// // //     cout << "x= " << bitset<16>(x-1) << endl;
// // //     cout << "y= " << bitset<16>(y) << endl;

// // // }*/
// // // /*int countSetBits(int x)
// // // {
// // //     int count = 0;
// // //     while (x)
// // //     {
// // //         x = x & (x-1);
// // //         count++;
// // //     }
// // //     return count;
// // // }

// // // int main()
// // // {
// // //     int x = 170;
// // //     int res = countSetBits(x);

// // //     cout << "170= " << bitset<16>(x) << endl;
// // //     cout<<res; 
// // // }*/
// // // int turnOffKthBit(int n , int k )
// // // {
// // //     return n & ~(1 << (k-1));
// // // }


// // // int main ()
// // // {
// // //     int x = 170 ;
// // //     int y = 1 ;
// // //     int z = ~y;

// // //     cout << "x= " << bitset<16>(x) << endl;
// // //     cout << "y= " << bitset<16>(y) << endl;
// // //     cout << "z= " << bitset<16>(z) << endl;



// // // }

// // class Student 
// // {
// //         int roll;
// //         string name;
// //     public:
// //         void input ();
// //         inline void output();

        
// // };

// // int main()
// // {
// //     Student s1;
// //     Student s2;
// //     Student *s3 =  new Student ();

// //     cout<<"\n\nFill the data of s1";
// //     s1.input();


// //     cout<<"\n\nFill the data of s2";
// //     s2.input();

// //     cout<<"\n\nFill the data of s3";
// //     s3->input();

// //     cout<<"\n All data saved.";
// //     s1.output();
// //     s2.output();
// //     s3->output();
// // }

// // void Student::input (){
        
// //     cout<<"\nEnter roll no.";
// //     cin >> roll;
// //     cout << "\nEnter name";
// //     cin >> name;
// // }
// // inline void Student::output(){
        
// //     cout << "\nROLL : " << roll;
// //     cout << "\nNAME : " << name;    
// // }



// #include<iostream>

// using namespace std;

// // int arraySum(int arr[],int size)
// // {
// //     if (size==0)
// //     {
// //         return 0;
// //     }
// //     return arr[size-1]+arraySum(arr,size-1);
// // }

// // int main(){
// //     int nums[] = {1,2,3,4,5,6,7,8,9,10};
// //     int size = sizeof(nums)/sizeof(nums[0]);

// //     cout << "Array elements : " << endl;
    
// //     for(int i=0; i < size; i++)
// //     {
// //         cout << nums[i] << ' ';
    
// //     }
// //     int sum = arraySum(nums,size);

// //     cout << "\nSum of arrya elements using recursion : " << sum;

// //     return 0;
// // }

// // int factorial (int n)
// // {
// //     if (n==0 || n==1)
// //     {
// //         return 1;
// //     }
// //     return n*factorial(n-1);
// // }

// // int main()
// // {
// //     int num;
// //     cout << "Input a number :";
// //     cin >> num ;
// //     int fact = factorial(num);
// //     cout << "Factorial of " << num  << "is :" << fact ;
// //     return 0;
// // }

// // int fibonacci (int n )
// // {
// //     if (n==0)
// //         return 0;
// //     else if (n==1)
// //     {
// //         return 1;
// //     }
// //     return fibonacci(n -1)+ fibonacci(n-2);
// // }
// // int main ()
// // {
// //     int n;
// //     cout << "Input a number :";
// //     cin >> n;
// //     int fib = fibonacci(n);
// //     cout << "fibonacci of "<<n<<"is"<<fib;
// //     return 0;
// // }

// int sunOfDigits(int number)
// {
//     if (number >= 0 && number <= 9)
//      return number;
//     return (number % 10 ) + sunOfDigits(number/10);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int res  = sunOfDigits(n);
//     cout << " sum of digits " << res << endl;
// }




