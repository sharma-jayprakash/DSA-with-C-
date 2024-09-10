// #include <iostream>
// using namespace std; 
// int main()
// {
// int i ; 
// cout<<"enter the number "; 
// cin >>i ; 

// for (int count = 100 ; count<=i ; count =count +2)
// {
//     cout<<count<<endl ; 
// }
// }




// wap to print alphabet from a to z 




// #include <iostream>
// using namespace std; 
// int main()
// {
// char name ; 
// for (name = 'a';name <='z'; name = name +1)
// {
//     cout <<name<<endl ; 
// }
// }



//write a program to reverse the counting from the number given by user 

// #include <iostream>
// using namespace std; 
// int main ()
// {
//     int n,i ; 
//     cout<<"enter the number :"; 
//     cin>>n; 

//     for ( i = n; i>=1;i= i-1  )
//     {
//         cout <<i<<endl; 
//     }
// }


//write a program to print from 1to 100 with the gap of 3 


// #include <iostream>
// using namespace std; 
// int main ()
// {
//     int i, n ; 
//     cout <<"enter the number:"; 
//     cin >>i ; 

//     for (n = 1 ; n <= 100 ; n = n+3)
//     {
//         cout <<n<<endl ; 
//     }
// }


// write a program to print a table 

// #include <iostream>
// using namespace std; 
// int main()
// {
//     int count  , n ; 
//     cout<<"enter the number which you want to print as a table :"; 
//     cin >>n ; 
    
//     for(count = 1 ; count <=10 ; count ++)
//     {
//         cout<<count * n <<"\n" ; 

//     }
// }





// #include <iostream>
// using namespace std; 
// int main ()
// {

// int n , pow,i, num ; 
// cout<<"enter the number :"; 
// cin >>n ; 
// cout<<"enter the pow:"; 
// cin >>pow; 

// num = n ; 
// for (i = 1; i <pow ; i = i +1)
// {
// num  = num *n; 
// }
// cout<<num; 

// }


// /write a program to print sum of first n natural number 



// #include <iostream>
// using namespace std; 
// int main ()
// {
// int count, sum , n ; 
// cout<<"enter the natural number for sum :"; 
// cin >>n ; 

// sum = 0; 
// for (count = 1 ; count<= n ; count = count+1)
// {
//     sum = sum + count ; 
//      //////isska bhi chakkar ha bhabhu bhaiya cout ko agar sum k sath rkhoge to vo sum ko bari bari print karayega 
//     //but agar bracket k bahar rkhoge to pura sum ka value lega 
// }
// cout<<sum<<endl ;
// }



// write a program to print the factorial of a number 



// #include <iostream>
// using namespace std;
// int main()
// {
//     int n , i ; 
//     cout<<"enter the number for which you want to evaluate :"; 
//     cin >>n; 
//     int fact = 1 ;
//     for (i = 1 ; i <= n ; i = i+1)
//     {
//         fact = fact * i ; 
//     }
//     cout << fact<<"/n"; 
// }





// write a program to find a number is prime numeber or not ;



// #include <iostream>
// using namespace std; 
// int main ()
// {
//     int n , i , prime ;
//     cout <<"enter the number:"; 
//     cin>>n ; 

//     if (n<2)
//     {
//     cout<<"not a prime number" ; 
//     return 0; // iska matlab ha mera program ktm aab age dheko 
//     }

//     else 
//     {
//         for (i = 2 ; i < n ; i ++)
//         {
//             if (n% i ==0 )
//             { 
//                 cout<<"not a prime" <<endl ; 
// return 0; 

//             } 
//         }
//         cout<<"prime number";
        
//     }
// }



///  first leetcode problem solve by me hurray 🫠😎



// #include <iostream>
// using namespace std; 
// int main ()
// {
//     int n ,a,b,c ; 
//     cout <<"enter a number:"; 
//     cin>>n ;
//     b = (n/10); 
//     cout <<b<<endl ;
    

//     a = (n % 10); 
//     cout<<a<<endl;

//     c = a+b ; 
//     cout<<c<<"\n"; 
//     return 0; 

// }

