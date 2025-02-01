 #include<iostream>
 #include<vector>

 using namespace std;

 int main(){
    vector<int>array1{1,1,2,3,4,5};
    vector<int>array2{2,3,4,4,5,6};
    
    int i=0;
    int j=0;
    vector<int>unionArr;
    while (i<array1.size() && j<array2.size())
    {
        if(array1[i]<=array2[j]){
            if(unionArr.size()==0 || unionArr.back()!=array1[i]){
                unionArr.push_back(array1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0||unionArr.back()!=array2[j]){
                unionArr.push_back(array2[j]);
            }
            j++;
        }
    }
    while(i<array1.size()){
        if(unionArr.size()==0 || unionArr.back()!=array1[i]){
                unionArr.push_back(array1[i]);
            }
            i++;
    }
    while(j<array2.size()){
        if(unionArr.size()==0||unionArr.back()!=array2[j]){
                unionArr.push_back(array2[j]);
            }
            j++;
        }

    for(auto x : unionArr){
        cout<< x << " ";
    }

    return 0;
 }