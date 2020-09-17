#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> a, vector<int> b)
{
    int i = 0;
    int j = 0;

    vector<int> merge_vec;


    while(i < a.size() && j < b.size())
    {
        //cout << i;
        cout << i << " " << j << endl;
        if(a[i] > b[j])
        {
            merge_vec.push_back(b[j]);
            j++;
        }
        else if(a[i] < b[j])
        {
            merge_vec.push_back(a[i]);
            i++;
        }
        else
        {
            merge_vec.push_back(a[i]);
            merge_vec.push_back(b[j]);
            i++;
            j++;
        }
    }
    while(j < b.size())
    {
        merge_vec.push_back(b[j]);
        j++;
    }

    while(i < a.size())
    {
        merge_vec.push_back(a[i]);
        i++;
    }

    return merge_vec;

}

int main()
{
    vector<int> x;
    vector<int> y;
    vector<int> s;


    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4);
    x.push_back(9);

    y.push_back(3);
    y.push_back(6);
    y.push_back(9);
    y.push_back(10);

    s = merge(x,y);

    //cout << s.size() << endl;

    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}