int hourglassSum(vector<vector<int>> arr) 
{
    vector<int> sum_vector;
    int sum;
    for(int i = 0; i < (arr.size() - 2); i++)
    {
        for(int j = 0; j < (arr[0].size() - 2); j++)
        {
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            sum_vector.push_back (sum);
        }
    }
    
    int max_val;
    max_val = *max_element(sum_vector.begin(), sum_vector.end());

    return max_val;


}
