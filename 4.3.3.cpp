#include <iostream>
#include <vector>
#include <algorithm>


class Div
{
public:
   Div()
   {
      Sum = 0;
      Count = 0;
   }

   void operator()(int n)
   {
      if (n % 3 == 0)
      {
         Sum += n;
         Count++;
      }
   }

   int get_sum() const
   {
      return Sum;
   }

   int get_count() const
   {
      return Count;
   }

private:
   int Sum;
   int Count;
};

int main()
{
   std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };

   std::cout << "[IN]: ";
   for (auto elem : numbers)
   {
      std::cout << elem << " ";
   }

   Div div;

   div = std::for_each(numbers.begin(), numbers.end(), div);

   std::cout << "\n[OUT]: get_sum() = " << div.get_sum() << std::endl;
   std::cout << "[OUT]: get_count() = " << div.get_count() << std::endl;

   return 0;
}