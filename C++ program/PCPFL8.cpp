#include<iostream>
#include<mutex>
#include<thread>
  
  // Starting count

int count = 0,n;
 
std::mutex m;
 
void printEvenNum()
{
   
            // Print number till the n

   while(count < n)
   {
       // goes to lock state

       m.lock();

       // If count is even then print

       if(count % 2 == 0)
       {
          // Print the number

          std::cout <<" Even number thread:" << count << std::endl;

          // Increment count

          count++;
       }
 
       if(count >= n)
       {
          m.unlock();
          return;
       }
       
          // goes to unlock state

       m.unlock();
    }
}
 
   // Function to print odd numbers

void printOddNum()
{
     // Print number till the n

    while(count < n)
    {
          // goes to lock state
       
      m.lock();

       // If count is odd then print

      if(count % 2 != 0)
      {
           // Print the number

         std::cout<<" Odd Number thread:" << count <<std::endl;

          // Increment count

         count++;
      }

          // goes to unlock state
        
      if(count >= n)
      {
        m.unlock();
        return;
      }
      m.unlock();
     }
}
 
  // Driver Code

int main()
{
   // Taking input from user

   std::cout << "\nEnter the number:";
   std::cin>>n;

   // Create thread t1

   std::thread t1(printEvenNum);
 
  // Create thread t2

   std::thread t2(printOddNum);

   // t1 will wait here until t2 excueted 

   t1.join();

   // t2 will wait here until t1 excueted 

   t2.join();
   return 0;
}