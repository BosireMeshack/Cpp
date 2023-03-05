#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr ={2, 4, 5, 7, 8, 9, 12, 14, 17, 19, 22, 25, 27, 28, 33, 37
};

    int searchValue=100;

    int high=arr.size()-1;
    int low=0;

int mid=(low+high)/2;
   while(high>=low)
   {
       cout<<low<<" "<<mid<<" "<<high<<endl;
        if(arr[mid]==searchValue){
        return mid;
        }
     else if(arr[mid]<searchValue)
      {
          low=mid+1;
          mid=(low+high)/2;
      }
    else if(arr[mid]>searchValue)
      {
          high=mid-1;
          mid=(low+high)/2;
      }


}
cout <<-1;

    return 0;
}
