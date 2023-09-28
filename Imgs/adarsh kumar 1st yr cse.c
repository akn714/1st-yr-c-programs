// sr.no. : 06/cs/22
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>


bool isSorted(int n,int arr[]);


int main(){
//	printf("----know your percentage and average----\n");
//	int maths, physics, english, hindi, computer;
//	
//	printf("enter your marks :\n");
//	printf("maths : ");
//	scanf("%d", &maths);
//	printf("physics : ");
//	scanf("%d", &physics);
//	printf("english : ");
//	scanf("%d", &english);
//	printf("hindi : ");
//	scanf("%d", &hindi);
//	printf("computer : ");
//	scanf("%d", &computer);
//	
//	float average = (maths+physics+english+hindi+computer)/5.0;
//	float prcntage = (maths+physics+english+hindi+computer)/1.0;
//	char smbl = '%';
//	printf("your average marks are : %f out of 100\n", average);
//	printf("your got %f%c\n",prcntage,smbl);






//	printf("---- simple interest ----\n");
//	int p,t,r;
//	printf("enter principle : ");
//	scanf("%d", &p);
//	printf("enter time : ");
//	scanf("%d", &t);
//	printf("enter rate : ");
//	scanf("%d", &r);
//	
//	float si = (p*r*t)/100.0;
//	printf("simple interest is : %f",si);






//	printf("---- circle ----\n");
//	int radius;
//	const float pi = 3.14;
//	
//	printf("enter radius of circle : ");
//	scanf("%d", &radius);
//	
//	float area =  pi*radius*radius*1.0;
//	float circumference = 2*pi*radius*1.0;
//	
//	printf("area of circle is %f\n", area);
//	printf("circumference of circle is %f\n", circumference);
	
	
	
	
//	printf("---- temprature conversion ----\n");
//	printf("enter temprature : ");
//	float c;
//	scanf("%f", &c);
//	float f = ((9*c)/5) + 32;
//	printf("your temprature in fahrenheit is : %f", f);





//	printf("---- swap ----\n");
//	int a,b,temp;
//	scanf("%d %d", &a, &b);
//	printf("a: %d  b: %d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a: %d  b: %d", a, b);
	
	
	
	
	
	
//	printf("---- equality of 2 numbers ----\n")
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if(a==b){
//		printf("equal");
//	}
//	else{
//		printf("not equal");
//	}
	
	
	
	
	
//	printf("---- greatest of 3 numbers ----\n")
//	int a,b,c;
//	scanf("%d %d %d", &a, &b, &c);
//	if(a>b){
//		if(a>c){
//			printf("%d is greatest\n", a);
//		}
//		else{
//			printf("%d is greatest\n", c);
//		}
//	}
//	else{
//		if(b>c){
//			printf("%d is greatest\n", b);
//		}
//		else{
//			printf("%d is greatest\n", c);
//		}
//	}
//	
	
	
	
	
	
//	printf("---- odd or even ----\n");
//	int a;
//	scanf("%d", &a);
//	if(a%2==0){
//		printf("%d is even", a);
//	}
//	else if(a%2!=0){
//		printf("%d is odd", a);
//	}






//	printf("---- leap year ----\n");
//	int yr;
//	scanf("%d", &yr);
//	if(yr%4==0){
//		printf("%d is a leap year", yr);
//	}
//	else{
//		printf("%d is not a leap year", yr);
//	}






//	printf("---- know your grade ----\n");
//	int a,b,c,d,e;
//	printf("enter your marks\n");
//	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//	int p = (a+b+c+d+e)/5;
//	if(p<=100 && p>90){
//		printf("your grade is A\n");
//	}
//	else if(p<=90 && p>80){
//		printf("your grade is B\n");
//	}
//	else if(p<=80 && p>60){
//		printf("your grade is C\n");
//	}
//	else if(p<=60){
//		printf("your grade is D\n");
//	}







//	printf("---- calculator ----\n");
//	int a,b;
//	char optr;
//	while(true){
//		scanf("%d %c %d", &a, &optr, &b);
//		switch(optr){
//			case '+': printf("%d %c %d %c %d\n", a, optr, b, '=', a+b);
//			break;
//			case '-': printf("%d %c %d %c %d\n", a, optr, b, '=', a-b);
//			break;
//			case '*': printf("%d %c %d %c %d\n", a, optr, b, '=', a*b);
//			break;
//			case '/': printf("%d %c %d %c %.4f\n", a, optr, b, '=', (float) a/b);
//			break;
//			case '%': printf("%d %c %d %c %d\n", a, optr, b, '=', a%b);
//			break;
//		}
//	}






//	printf("----factorial calculator----\n");
//	int n;
//	printf("enter a number : ");
//	scanf("%d", &n);
//	int fact = 1;
//	int i;
//	for(i=2;i<=n;i++){
//		fact  *=  i;
//	}
//	printf("factorial of %d is %d", n, fact);






//	printf("----odd sum and even sum----\n");
//	int n;
//	printf("enter a number : ");
//	scanf("%d", &n);
//	int evenSum = 0;
//	int oddSum = 0;
//	int i;
//	for(i=1;i<=n;i++){
//		if(i%2==0){
//			evenSum += i;
//		}
//		else{
//			oddSum += i;
//		}
//	}
//	printf("odd sum : %d\n", oddSum);
//	printf("even sum : %d\n", evenSum);






//	printf("----fabonacci series----\n");
//	int n;
//	printf("till how many numbers you want to print fabonacci series : ");
//	scanf("%d", &n);
//	int a = 0, b = 1, c;
//	printf("%d %d ", a, b);
//	int i;
//	for(i=0;i<n;i++){
//		c = a+b;
//		printf("%d ", c);
//		a = b;
//		b = c;
//	}







//	printf("----check prime----\n");
//	int n;
//	printf("enter a number : ");
//	scanf("%d", &n);
//	int isPrime = 1;
//	int i;
//	for(i=2;i<n;i++){
//		if(n%i==0){
//			isPrime = 0;
//		}
//	}
//	if(isPrime){
//		printf("%d is a prime number\n", n);
//	}
//	else{
//		printf("%d is not a prime number\n", n);
//	}
	
	
	
	
	
	
	
//	printf("----sum of digits of number----\n");
//	int n;
//	printf("enter a number : ");
//	scanf("%d", &n);
//	int sum = 0;
//	int i;
//	while(n){
//		sum += n%10;
//		n /= 10;
//	}
//	printf("sum of digits of the given number is %d", sum);







//	printf("----reverse of a number----\n");
//	int n, m;
//	printf("enter a number : ");
//	scanf("%d", &n);
//	while(n){
//		m = m*10 + n%10;
//		n /= 10;
//	}
//	printf("reversed value of %d is : %d", n, m);








//	printf("----armstrong number----\n");
//	int n;
//	printf("enter a number : ");
//	scanf("%d", &n);
//	int sum = 0;
//	int temp = n;
//	int i;
//	while(n){
//		i = n%10;
//		n /= 10;
//		sum += i*i*i;
//	}
//	if(sum==temp){
//		printf("%d is an armstrong number\n", temp);
//	}
//	else{
//		printf("%d is not an armstrong number\n", temp);
//	}







// 	printf("----binary to decimal and decimal to binary----\n");
// 	printf("1 : binary to decimal\n2 : decimal to binary\n");
// 	char option;
// 	printf("choose option [1/2] : ");
// 	scanf("%c", &option);
// 	int n, newNum;
// 	printf("enter number : ");
// 	scanf("%d", &n);
// 	if(option=='1'){
// //		printf("binary to decimal\n");
// 		printf("%d in decimal is  %d", n, newNum);
// 	}else{
// //		printf("decimal to binary\n");
// 		printf("%d in binary is  %d", n, newNum);
// 	}







	// linear search
//	int n;
//	printf("enter length of array : ");
//	scanf("%d", &n);
//	int arr[n];
//	printf("enter elements of array : ");
//	int i;
//	for(i=0;i<n;i++){
//		scanf("%d", &arr[i]);
//	}
//	int m;
//	printf("which number do you want to find : ");
//	scanf("%d", &m);
//	int steps=1;
//	for(i=0;i<n;i++){
//		if(arr[i]==m){
//			printf("%d found in %d steps", m, steps);
//			break;
//		}
//		else{
//			steps++;
//		}
//	}






	// bubble sort
//	int n;
//	printf("enter the length of array : ");
//	scanf("%d", &n);
//	int arr[n];
//	int i;
//	printf("enter the elements of array : ");
//	for(i=0;i<n;i++){
//		scanf("%d", &arr[i]);
//	}
//	int temp, steps=1;
//	for(i=0;i<n-1;i++){
//		if(arr[i]>arr[i+1]){
//			temp = arr[i];
//			arr[i] = arr[i+1];
//			arr[i+1] = temp;
//		}
//		if(i==n-2){
//			if(!isSorted(n, arr)){
//				i=-1;
//				steps++;
//			}
//		}
//	}
//	printf("sorted the array using bubble sort in %d steps\nsorted array : ", steps);
//	for(i=0;i<n;i++){
//		printf("%d ", arr[i]);
//	}







	// sum of diagonal elements of a matrix
//	int n;
//	printf("enter the length order of matrix : ");
//	scanf("%d", &n);
//	int mat[n][n];
//	printf("enter the matrix :\n");
//	int i, j;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			scanf("%d", &mat[i][j]);
//		}
//	}
//	int sum=0;
//	for(i=0;i<n;i++){
//		sum += mat[i][i];
//	}
//	printf("sum of diagonal elements of the matrix is : %d", sum);

	
	
	
	
	
	
	// adding and multiplying 2 matrices of order nxn
//	int n;
//	printf("enter the value of n to make matrix of order nxn : ");
//	scanf("%d", &n);
//	int mat1[n][n], mat2[n][n], add12[n][n], mult12[n][n];
//	printf("enter matrix 1 :\n");
//	int i, j, k;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			scanf("%d", &mat1[i][j]);
//		}
//	}
//	printf("enter matrix 2 :\n");
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			scanf("%d", &mat2[i][j]);
//			mult12[i][j] = 0;
//		}
//	}
//	for(k=0;k<n;k++){
//		for(i=0;i<n;i++){
//			for(j=0;j<n;j++){
//				add12[i][j] = mat1[i][j] + mat2[i][j];
//				mult12[k][i] += mat1[k][j]*mat2[j][i];
//			}
//		}
//	}
//	printf("\naddition of 2 matrices :\n");
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d ", add12[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\nmultiplication of 2 matrices :\n");
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d ", mult12[i][j]);
//		}
//		printf("\n");
//	}







//	int day;
//	scanf("%d", &day);
//	switch(day){
//		case 1:
//			printf("monday\n");
//			break;
//		case 2:
//			printf("tuesday\n");
//			break;
//		case 3:
//			printf("wednesday\n");
//			break;
//		case 4:
//			printf("thursday\n");
//			break;
//		case 5:
//			printf("friday\n");
//			break;
//		case 6:
//			printf("saturday\n");
//			break;
//		case 7:
//			printf("sunday\n");
//			break;
//		default:
//			printf("invalid day");
//	}


//	int n, m;
//	scanf("%d", &n);
//	while(n){
//		m = m*10 + n%2;
//		n /= 2;
//	}
//	printf("%d", m);


	

	
//	int n, i;
////	scanf("%d", &n);
//	int sum=0;
//	for(i=0;i<26;i++){
//		sum += i;
//	}
//	printf("%d", sum);







	// roots of quadratic equation
	float a,b,c;
	printf("\tenter a, b and c to form quadratic equation ( ax^2 + bx + c = 0 ) : ");
	scanf("%f%f%f", &a, &b, &c);
	float D = pow(b,2)-4*a*c;
	float commanExp = b/(2*a);
	if(D==0){
		printf("\n\tboth roots will be same\n\n");
		printf("\troot 1 : %.2f\n\troot 2 : %.2f\n", -commanExp, -commanExp);
	}
	else if(D<0){
		printf("\n\t2 different imaginary roots\n\n");
		printf("\troot 1 : %.2f + %.2fi\n\troot 2 : %.2f - %.2fi\n", -commanExp, sqrt(-D)/(2*a), -commanExp, sqrt(-D)/(2*a));
	}
	else{
		printf("\n\t2 different real roots\n\n");
		printf("\troot 1 : %.2f\n\troot 2 : %.2f\n", -commanExp - sqrt(D)/(2*a), -commanExp + sqrt(D)/(2*a));
	}

}

// this function is used in the code of bubble sort
//bool isSorted(int n, int arr[]){
//	int i;
//	for(i=0;i<n-1;i++){
//		if(arr[i]>arr[i+1]){
//			return false;
//		}
//	}
//	return true;
//}
