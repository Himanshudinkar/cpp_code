// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {7,5,6,8,11,92,18,19};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     cout << "array like" << "\n";

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     cout << "\n prime number \n";

//     for (int j = 0; j < len; j++)
//     {
//         int p = arr[j] - 1;
//         bool f = false;

//         do
//         {
//             if (arr[j]%p == 0)
//             {
//                 f = true;
//             }
//             p--;
            
//         } while (p > 1);

//         if (f == false)
//         {
//             cout << arr[j] << "\t";
//         }
        
       
//     }
//      return 0;
    
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {64,24,81,312,25,121,76,625};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     cout << "given array" << "\n";
    
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }
    

//     cout << "\n valid square of this number\n";

//     for (int j = 0; j < len; j++)
//     {
//         int s = arr[j];

//         for (int x = 1; x <= s; x++)
//         {
//             if (x*x == s)
//             {
//                 cout << s << "\t";
//                 break;
//             }
           
//         }
        
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10,30,4,60,3,1,86,23,98};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     int min = INT8_MAX;

//     for (int i = 0; i < len; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
        
//     }
//     cout << "minimum value = " << min << "\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10,30,4,60,3,1,86,23,9};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     int max = INT8_MIN;

//     for (int i = 0; i < len; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
        
//     }
//     cout << "minimum value = " << max << "\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {7,5,24,15,11,29};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     cout << "\n prime number \n";

//     for (int j = 0; j < len; j++)
//     {
//         int p = arr[j] - 1;
//         bool f = true;

//         do
//         {

//             if (arr[j] % p == 0)
//             {
//                 f = false;
//             }

//             p--;
//         } 

//         while (p > 1);
        
//         if (f == true)
//         {
//             cout << arr[j] << "\t";
//         }
        
//     }
//     return 0;
    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {64,25,36,87,12,49,20,19,29,625};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }
    
//     cout << "\n valid square\n";

//     for (int j = 0; j < len; j++)
//     {
//         int s = arr[j];

//         for (int x = 1; x <= s; x++)
//         {
//             if (x*x == s)
//             {
//                 cout << s << "\t";
//                 break;
//             }
            
//         }
        
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {12,43,12,11,32,2,4,12};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int min = INT8_MAX;

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }
    
//     cout << "\n minimum value of the given array\n";

//     for (int j = 0; j < len; j++)
//     {
//         if (min > arr[j])
//         {
//             min = arr[j];
//         }
        
//     }
//     cout << "minimum value = " << min << "\n";

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {12,43,76,2,1,28,99,12,43,3};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int max = INT8_MIN;

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }
    
//     cout << "\n maximum value \n";

//     for (int j = 0; j < len; j++)
//     {
//         if (max < arr[j])
//         {
//             max = arr[j];
//         }
        
//     }
//     cout << max << "\n";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2,3,4,8,2,5,6};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int first = INT8_MIN;
//     int second = INT8_MAX;

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     cout << "\n second maximum value is \n";

//     for (int j = 0; j < len; j++)
//     {
//         if (arr[j] > first)
//         {
//             second = first;
//             first = arr[j];
//         }
//         else if (arr[j] > second && arr[j] != first)
//         {
//             second = arr[j];
//         }
           
//     }
//      cout << second << "\n";
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2,1,3,1,5,1};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     cout << "\n after replace \n";

//     for (int j = 0; j < len; j++)
//     {
//         if (arr[j] == 1)
//         {
//             arr[j] = 0;
//         }
//         cout << arr[j] << "\t";
//     }
    
//     return 0;
    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {19,8,4,5,9,2,16};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     cout << "\n output \n";

//     for (int i = 0; i < len; i++)
//     {
//         for (int j = 0; j < len-1; j++)
//         {
//             int tmp;

//             if (arr[j] > arr[j+1])
//             {
//                 tmp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = tmp;
//             }
            
//         }
//     }
    

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }
    
//     return 0;
    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {9,8,4,5,9,2,16};
//   int len = sizeof(arr)/sizeof(arr[0]);

//  for (int i = 0; i < len; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << "\n output \n";



//  for (int i = 0; i < len; i++)
//  {
//     for (int j = 0; j < len-1; j++)
//     {
//         int tmp;

//         if (arr[j] < arr[j+1])
//         {
//             tmp = arr[j+1];
//             arr[j+1] = arr[j];
//             arr[j] = tmp;
//         }
        
//     }
    
//  }
//  for (int i = 0; i < len; i++)
//    {
//        cout << arr[i] << "\t";
//    }

//    return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {4,0,4,3,0,5,0,23,0,54,0,23,45,0,9};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int arr2[len];
//     int k = 0;

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     cout << "\n output \n";

//     for (int j = 0; j < len; j++)
//     {
//         if (arr[j] != 0)
//         {
//             arr2[k] = arr[j];
//             k++;
//         }
        
//     }
//     while (k < len)
//     {
//         arr2[k] = 0;
//         k++;
//     }
    
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr2[i] << "\t";
//     }
//     return 0;
    

// }

//2D

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "enter size of row" << "\n";
//     int r = 0;
//     cin >> r;

//     cout << "enter size of column" << "\n";
//     int c = 0;
//     cin >> c;

//     cout << "enter " << r*c << " values" << "\n";
//     int arr[r][c];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//     }

//     cout << "\n array like \n";

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << "\n";
//     }
    
//     cout << "\n even number \n";

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (arr[i][j] % 2 == 0)
//             {
//                 cout << arr[i][j] << "\t";
//             }
            
//         }
        
//     }
//     return 0;
    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int min = INT8_MAX;
//     cout << "enter size of row" << "\n";
//     int r = 0;
//     cin >> r;

//     cout << "enter size of column" << "\n";
//     int c = 0;
//     cin >> c;

//     cout << "enter " << r*c << "values" << "\n";
//     int arr[r][c];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//     }
    
//     cout << "\n array like \n";

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (min > arr[i][j])
//             {
//                 min = arr[i][j];
//             }
            
//         }
        
//     }
    
//     cout << min << "\n";

//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int s = 0;
//     cout << "enter size of row" << "\n";
//     int r = 0;
//     cin >> r;

//     cout << "enter size of column" << "\n";
//     int c = 0;
//     cin >> c;

//     cout << "enter " << r*c << "values" << "\n";
//     int arr[r][c];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//     }
    
//     cout << "\n array like \n";

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             s = s + arr[i][j];  
//         }
        
//     }
    
//     cout << s << "\n";

//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "enter size of row" << "\n";
//     int r = 0;
//     cin >> r;

//     cout << "enter size of column" << "\n";
//     int c = 0;
//     cin >> c;


//     if (r == c)
//     {
      
//        cout << "enter " << r*c << "values" << "\n";
//        int arr[r][c];

//         for (int i = 0; i < r; i++)
//       {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//       }

//       cout << "\n array like \n";

//         for (int i = 0; i < r; i++)
//       {
//         for (int j = 0; j < c; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << "\n";
//       }

//       cout << "\n after transpose\n";

//       for (int i = 0; i < r; i++)
//       {
//         for (int j = i+1; j < c; j++)
//         {
//             int tmp;
//             tmp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = tmp;
//         }
//       }
      
//       for (int i = 0; i < r; i++)
//       {
//         for (int j = 0; j < c; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << "\n";
//       }
      


//     }
//     else
//     {
//         cout << "matrix transpose imposiible" << "\n";
//     }

//     return 0;

// }

// accending order

   
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "enter size of r1" << "\n";
//     int r1 = 0;
//     cin >> r1;

//     cout << "enter size of c1" << "\n";
//     int c1 = 0;
//     cin >> c1;

//     cout << "enter size of r2" << "\n";
//     int r2 = 0;
//     cin >> r2;

//     cout << "enter size of c2" << "\n";
//     int c2 = 0;
//     cin >> c2;

//     if (c2 == r1)
//     {
//         int a[r1][c1];
//         int b[r2][2];
//         int ans[r1][c2];
//         int s = 0;

//         cout << "enter " << r1*c1 << "values of array 1" << "\n";

//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 cin >> a[i][j];
//             }
            
//         }

//         cout << "\n enter" << r2*c2 << "values of array 2" << "\n";

//          for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 cin >> b[i][j];
//             }
            
//         }

//         cout << "\n data of array 1 is" << "\n";

//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 cout << a[i][j]  << "\t";
//             }
//             cout << "\n";
//         }


//         cout << "\n data of array 2 is" << "\n";

//         for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 cout << b[i][j]  << "\t";
//             }
//             cout << "\n";
//         }
        
//         cout << "\n after matrix multipication\n";

//         for (int i = 0; i < r1; i++)
//         {
//             s = 0;

//             for (int j = 0; j < c2; j++)
//             {
//                 for (int k = 0; k < c1; k++)
//                 {
//                     s = s + a[i][k] * b[k][i];
//                     ans[i][j] = s;
//                 }
                
//             }
            
//         }

//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 cout << ans[i][j] << "\t";
//             }
//             cout << "\n";
//         }      

         
//     }
//      else{
//         cout << "matrix multipication is impossible" << "\n";
//      }

//      return 0;
    
// }

// #include <iostream>
// using namespace std;

//  int c = 0;

// void run(int &a, int &b)
// {
   
//     c= a + b;
    
// }

// int main()
// {
//     cout << "enter number 1" << "\n";
//     int n1 = 0;
//     cin >> n1;

//     cout << "enter number 2" << "\n";
//     int n2 = 0;
//     cin >> n2;
//     run(n1,n2);
    
//     cout << c;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int run()
// {
//     return 3;
// }

// int main()
// {
//     cout << run();
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2,43,64,24,25,12,36,34};
//     int len = sizeof(arr)/sizeof(arr[0]);
  

//     for (int i = 0; i < len; i++)
//     {
//        int s = arr[i];

//        for (int x = 1; x < s; x++)
//        {
//          if (x*x == s)
//          {
//             cout << s << "\t";
//             break;
//          }
         
//        }
       
       
//     }
    

    
    
// }

// function question ..............................................................................

// #include <iostream>
// using namespace std;

// void run(int n)
// {
//    cout << n*n*n << "\n";
// }

// int main()
// {
//    cout << "enter a number" << "\n";
//    int n = 0;
//    cin >> n;

//    run(n);

//    return 0;

// }

// #include <iostream>
// using namespace std;

// void run(float r,float pi)
// {
   
//    float d = 0;
//    float c = 0;
//    float a = 0;

//    d = 2 * r;
//    c = 2*pi*r;
//    a = pi * (r * r);

//    cout << "diameter of circle is = " << d << "\n";
//    cout << "circumfarence of cicle is = " << c << "\n";
//    cout << "area of circle is" << a << "\n";

// }

// int main()
// {
//    cout << "enter radius of circle" << "\n";
//    float r = 0;
//    cin >> r;

//    const float pi = 3.14;
    
//    run(r,pi);

//    return 0;


// }

// #include <iostream>
// using namespace std;

// void run(int n1,int n2)
// {
//    if (n1 > n2)
//    {
//       cout << "maximum number is = " << n1 << "\n";
//       cout << "minimum number is = " << n2 << "\n";
//    }
//    else if (n2 > n1)
//    {
//       cout << "maximum number is = " << n2 << "\n";
//       cout << "minimum number is = " << n1 << "\n";
//    }
   
   
// }
// int main()
// {
//    cout << "enter number 1" << "\n";
//    int n1 = 0;
//    cin >> n1;

//    cout << "enter number 2" << "\n";
//    int n2 = 0;
//    cin >> n2;

//   run(n1,n2);

// }

// #include <iostream>
// using namespace std;

// void run (int n)
// {
//    if (n % 2 == 0)
//    {
//       cout << "number is even" << "\n";
//    }
//    else if (n % 2 != 0)
//    {
//       cout << "number is odd" << "\n";
//    }
   
// }
// int main()
// {
//    cout << "enter a number " << "\n";
//    int n = 0;
//    cin >> n;
   
//    run(n);
// }

// #include <iostream>
// using namespace std;

// void run(int start, int end)
// {
   
//    for (int i = start; i < end; i++)
//    {
//       int p = i - 1;
//       int s = 0;

//       do
//       { 
//          if (i % p == 0)
//          {
//             s = s + p;
//          }
//          p--;
         
//       } while (p >=1 );

//     if (s == i)
//     {
//       cout << i << "\n";
//     }
        
//    }
   
// }

// int main()
// {
//    cout << "enter starting poin of interval" << "\n";
//    int start  = 0;
//    cin >> start;

//    cout << "enter ending point of given number" << "\n";
//    int end = 0;
//    cin >> end;

//    run(start,end);

// }

// #include <iostream>
// using namespace std;

// void run(int n)
// {
//   int prime = n-1;
//   bool f = false;

//   do
//   {
//     if (n % prime == 0)
//     {
//       f = true;
//     }
//     prime--;
//   } while (prime > 1);

//   if (f == false)
//   {
//     cout << "number is prime" << "\n";
//   }

//   else
//   {
//     cout << "not prime" << "\n";
//   }
  
  
// }
// void perfect(int n)
// {
//    int p = n-1;
//    int s = 0;

//    do
//    {
//       if (n %p == 0)
//       {
//          s = s + p;
//       }
//       p--;
//    } while (p>0);

//    if (s == n)
//    {
//       cout << "number is perfect" << "\n";
//    }
//    else
//    {
//       cout << "number is not perfect" << "\n";
//    }
   
// }

// void arm(int n)
// {
//   int s = 0;
//   int c = 0;
//   int num = n;

//    if (n >= 100 && n <= 999)
//    {
//       do
//       {
//          c = n % 10;
//          s = s + (c*c*c);
//          n = n/10;
//       } while (n > 0);

//       if ( s == num)
//       {
//          cout << "number is armstrong" << "\n";
//       }
//       else
//       {
//          cout << "number is not armstrong" << "\n";
//       }
      
      
//    }
//    else
//    {
//       cout << "invalid number" << "\n";
//    }
   

// }
// int main()
// {
//    cout << "enter a number" << "\n";
//    int n = 0;
//    cin >> n;

//    run(n);
//    perfect(n);
//    arm(n);
// }
// #include <iostream>
// using namespace std;

// void run(int b,int p)
// {
//    int s = 1;

//    do
//    {
//       s = s * b;
//       p--;
//    } while (p > 0);

//    cout << s << "\n";
// }
// int main()
// {
//    cout << "enter base" << "\n";
//    int b = 0;
//    cin >> b;

//    cout << "enter power" << "\n";
//    int p = 0;
//    cin >> p;

//     run(b,p);

// }

// #include <iostream>
// using namespace std;
// void run(int n)
// {
//    int c = 0;
//    int r = 0;

//    do
//    {
//       c = n % 10;
//       r = r * 10 + c;
//       n = n/10;
//    } while (n > 0);

//    cout << "revers number of number is = " << r << "\n";
   
// }

// int main()
// {
//    cout << "enter a number" << "\n";
//    int n = 0;
//    cin >> n;

//    run(n);
// }

// #include <iostream>
// using namespace std;

// void run(int n)
// {
//    int c = 0;
//    int r = 0;
//    int num = n;

//    do
//    {
//       c = n % 10;
//       r = r * 10 + c;
//       n = n/10;

//    } while (n > 0);

//    if (num == r)
//    {
//       cout << "number is palindrom" << "\n";
//    }
//    else
//    {
//       cout << "number not palindrom" << "\n";
//    }
   
// }
// int main()
// {
//    cout << "enter a number" << "\n";
//    int n = 0;
//    cin >> n;

//    run(n);
// }

// #include <iostream>
// using namespace std;

// void run(int n)
// {
//    int f = n;
//    int s = 1;

//    do
//    {
//       s = s * f;
//       f--;
//    } while (f > 0);
   
//    cout << s << "\n";
// }
// int main()
// {
//    cout << "enter a number" << "\n";
//    int n = 0;
//    cin >> n;

//    run(n);
// }

//pattern

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;
//     int n = 1;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << n;
//             n++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;
//     int n = 1;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << n *n;
//             n++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(j+64);
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;
//     char c = 'A';

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << c;
//             c++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;

//     for (int i = 1; i <= r; i++)
//     {


//         for (int s = 3; s >= i; s--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 3;

//     for (int i = 1; i <= r; i++)
//     {


//         for (int s = 3; s >= i; s--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
            
//         }
//         cout << "\n";
//     }
//     return 0;
// }