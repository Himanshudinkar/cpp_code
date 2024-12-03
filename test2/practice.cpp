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

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,342,67,23,9,1,34};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min = INT8_MAX;

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n output \n";

    for (int i = 0; i < len; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    
    cout << min << "\n";

    return 0;
    
}