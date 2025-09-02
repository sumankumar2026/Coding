
/*
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // insert
    unordered_map<int, int> umap;
    umap[1] = 100;
    umap[2] = 200;
    umap[3] = 450;
    // umap[3] = 520;   // here we update the value;
    cout << umap[3] << endl;
    return 0;
}
    */

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> umap;
    umap.insert({4,400});
    umap.insert({5,400});
    // umap.insert({6,400});
    umap.insert({7,400});
    umap.insert({8,400});
    umap.insert(make_pair(5,500));
    umap[6] = 500;

    auto result = umap.insert({4,600});
    // if(!result.second){
    //         cout << "he alaready here" << endl ;
    // }

    // cout << umap[4] << " ";

    // cout << umap[4] << " ";
    // cout << umap[78] << " ";

    cout << umap.at(79);  // throw an error
    auto it = umap.find(6);
    if(it != umap.end()){
    cout << it-> second << " " ;
    }
    else{
        cout << "not found" << endl ;
    }
    return 0;
}