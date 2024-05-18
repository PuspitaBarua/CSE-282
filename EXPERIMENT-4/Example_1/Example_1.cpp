///**vector: Member Functions
//1) push_back(element) -----> push_back() is used for inserting an element at the end of the vector
//2) pop_back() -----> pop_back() is used to remove the last element from the vector. It reduces the size of the vector by one.
//8) clear() ----- > This method clears the whole vector, removes all the elements from the vector but do not delete the vector.
//9) size() ------> returns the size of the vector
//**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec1;
    vector<string>vec2;
    for(int i = 0;i < 5; i++ )
{
       vec1.push_back(i);
}
vec1.push_back(100);
vec1.push_back(10);
vec1.push_back(23);
vec1.push_back(9);
// Print the elements of the vector
for(int i=0;i<vec1.size();i++){
cout<<vec1[i]<<"\t";
}
}


