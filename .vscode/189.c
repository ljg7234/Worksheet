int main(){
	int a, b, c, d;
	int bu, ja;
	int cnt=2;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	ja = (a * d)+(b * c);
	bu = b * d;
	
	while(cnt <= ja && cnt <= bu){
		if((ja % cnt!=0)||(bu % cnt!=0)){
			cnt++;
		}
		else {
			ja /= cnt;
			bu /= cnt;	
		}
	}
	
	printf("%d %d", ja, bu);
	
}