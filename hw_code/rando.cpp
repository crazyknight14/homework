#include <iostream>
#include <random>


using namespace std;
void bigRandomArray(int &arr[])

int main(){


	return 0;
}


void bigRandomArray(int &arr[])
{
  std::unordered_set<int> temp;
  int size = temp.size();

  //setup random
  std::random_device rd;
  std::mt19937 eng(rd());
  std::uniform_int_distribution<> distr(0, INT_SOFT_MAX);

  while(size != BIG)
  {
    temp.insert(distr(eng));
    size = temp.size();
  }


  int i = 0;
  for(auto el:temp)
  {
    arr[i]=el;
    i++;
  }
}