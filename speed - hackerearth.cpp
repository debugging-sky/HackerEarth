/* SPEED

Rash is known about his love for racing sports. He is an avid Formula 
1
1 fan. He went to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of the circuit was a long straight road. It was impossible for a car to overtake other cars on this segment. Therefore, a car had to lower down its speed if there was a slower car in front of it. While watching the race, Rash started to wonder how many cars were moving at their maximum speed. Formally, you're given the maximum speed of 
N
N cars in the order they entered the long straight segment of the circuit. Each car will prefers to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions. For the purpose of this problem, you can assume that the straight segment is infinitely long. Count the number of cars which were moving at their maximum speed on the straight segment.

Input

The first line of the input contains a single integer 
T
T denoting the number of test cases to follow. Description of each test case contains 
2
2 lines. The first of these lines contain a single integer 
N
N, the number of cars. The second line contains 
N
N space separated integers, denoting the maximum speed of the cars in the order they entered the long straight segment.

Output

For each test case, output a single line containing the number of cars which were moving at their maximum speed on the segment.

Constraints
1<=T<=100
1<=N<=10^5;
1<=SPEED<=10^9
*/

#include <iostream>
using namespace std;

int main()
{
	int tc; // testcase
	cin>>tc;
	
	int array[100000];
	int size;          // size of array; ie no of cars
	int max;         // max current speed of car
	int count=1;   //    to keep track of the cars with max speed , it is 1 because                   first car has no restriction
	
	
	while(tc--){
		cin>>size;
		
		cin>>array[0];
		max=array[0];
		for(int i=1;i<size;i++)
		{
			cin>>array[i];
			if (array[i]<=max)    //  if current speed < max then count++;
			{count++;
			max=array[i];   // updating max speed to current speed;
		}}
		
		cout<<count<<endl;
		count=1;
		
	}
	
	
    return 0;
}

