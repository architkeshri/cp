vector<int> icecreamParlor(int m, vector<int> arr) {
    int n = arr.size();
    vector<int> ans;
    vector <int> index;
    
    for(int i = 0 ; i < n; i++){
        index.push_back(arr[i]);
    }
    sort(arr.begin(),arr.end());
    int flag = 0;
   for(int i = 0; i < n; i++){
       
       int low = 0;
       int high = n - 1;
       while(low <= high){
          int  mid = (low+high)/2;
           if(arr[mid]==m-arr[i]){
             ans.push_back(arr[i]);
             ans.push_back(arr[mid]);
            
             flag = 1;
             break; 
           }
           else if(arr[mid] < m-arr[i]){
               low = mid + 1;
           }
           else{
               high = mid - 1;
           }
       }
       if(flag){
           break;
       }
   }
   int x = ans[0];
   int y = ans[1];
  // cout << x << " " << y << " ";
   for(int i = 0; i < n; i++){
       if(index[i] == x){
           ans[0] = i+1; 
       }
   }
   for(int i = 0; i < n; i++){
       if(i != ans[0]-1 && index[i] == y){
           ans[1] = i+1;
       }
   }
    sort(ans.begin(),ans.end());

    return ans;
}