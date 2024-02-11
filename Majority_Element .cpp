int majorityElement(vector<int> v) {

	int cnt=0;

	int ele;

	for(int i=0;i<v.size();i++){

		if(cnt == 0){

			cnt=1;
			
			ele=v[i];

		}
		else if(v[i] == ele){

			cnt++;

		}
		else{

			cnt--;
		}
	}

	int cnt1=0;

	for(int i=0;i<v.size();i++){

		if(v[i]==ele) cnt1++;

	}

	if(cnt1 > (v.size()/2)){

		return ele;
	}
	
	return -1;

}
