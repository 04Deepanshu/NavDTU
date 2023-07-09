#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
#define i 9999
using namespace std;
int NO_PARENT = -1;

vector<vector<string>>Paths;
void printPath(int currentVertex, vector<int> parents,vector<string>&Places)
{
	if (currentVertex == NO_PARENT) {
		return;
	}
	printPath(parents[currentVertex], parents,Places);
	cout << Places[currentVertex] << "-> ";
}

void printSolution(int startVertex, vector<int> distances,
				vector<int> parents,vector<string>&Places,int endVertex)
{
    	
            cout<<"Distance = ";
			cout << distances[endVertex] <<endl;
			printPath(endVertex, parents,Places);
}


void dijkstra(vector<vector<int> > adjacencyMatrix,
			int startVertex,vector<string>&Places,int endVertex)
{
	int nVertices = adjacencyMatrix[0].size();
	vector<int> shortestDistances(nVertices);	
	vector<bool> added(nVertices);
	
	for (int vertexIndex = 0; vertexIndex < nVertices;
		vertexIndex++) {
		shortestDistances[vertexIndex] = INT_MAX;
		added[vertexIndex] = false;
	}
	shortestDistances[startVertex] = 0;

	vector<int> parents(nVertices);

	parents[startVertex] = NO_PARENT;

	for (int r = 1; r < nVertices; r++) {
		int nearestVertex = -1;
		int shortestDistance = INT_MAX;
		for (int vertexIndex = 0; vertexIndex < nVertices;
			vertexIndex++) {
			if (!added[vertexIndex]
				&& shortestDistances[vertexIndex]
					< shortestDistance) {
				nearestVertex = vertexIndex;
				shortestDistance
					= shortestDistances[vertexIndex];
			}
		}
		added[nearestVertex] = true;
		for (int vertexIndex = 0; vertexIndex < nVertices;
			vertexIndex++) {
			int edgeDistance
				= adjacencyMatrix[nearestVertex]
								[vertexIndex];

			if (edgeDistance > 0
				&& ((shortestDistance + edgeDistance)
					< shortestDistances[vertexIndex])) {
				parents[vertexIndex] = nearestVertex;
				shortestDistances[vertexIndex]
					= shortestDistance + edgeDistance;
			}
		}
	}

	printSolution(startVertex, shortestDistances, parents,Places,endVertex);
}
int main(){
vector<string>Places={"College Gate","AB Hostel","SBI Bank","KCH Hostel","SNH Hostel","SPS 9-12","Pragya Bhawan","Canteen","Civil Department","Electronics Department","Electrical Department","Nescafe",
"AMUL","Mechanical And Biotechnology Department","SPS 1-4","SPS 5-8","MECHANICAL WORKSHOP","SCIENCE BLOCK","SPORTS COMPLEX","Computer Center","OAT","Mini Oat","BR AUDI","Mathematics & Computing",
"Software Engineering","Computer Science Department","Information Technology Department","Raj Soin Hall","JCB Hostel","CVR Hostel","BCH Hostel","BMH Hostel","HJB Hostel","VVS Hostel","Admin Block","Library"};

vector<vector<int>>adjacencyMatrix={{0,3,8,9,4,10,9,9,6,3,6,7,9,11,12,13,15,15,18,11,10,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i},
{3,0,1,2,1,3,3,8,5,8,10,13,8,10,12,13,15,i,i,i,12,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i},  
{8,1,0,1,3,3,3,5,i,i,i,i,i,i,i,i,i,i,i,i,13,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{9,2,1,0,2,1,2,6,4,6,8,i,i,i,5,5,i,i,i,i,14,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{4,1,3,2,0,2,2,i,3,5,i,i,i,i,i,i,i,i,i,i,10,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{10,3,3,1,2,0,1,3,3,i,i,i,5,i,i,i,i,i,i,i,8,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{9,3,3,2,2,1,0,2,1,5,7,8,3,i,i,i,i,i,i,i,8,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{9,8,5,6,i,3,2,0,2,4,6,10,1,1,3,4,6,i,i,i,9,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{6,5,i,4,3,3,1,2,0,1,3,4,1,3,5,5,i,i,i,i,1,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{3,8,i,6,5,i,5,4,1,0,1,2,3,4,6,6,3,5,12,i,2,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i},
{6,8,i,8,i,i,7,6,3,1,0,2,3,5,10,11,8,7,9,i,2,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{7,13,i,i,i,i,8,10,4,2,2,0,3,4,7,8,8,5,7,3,3,2,3,5,5,4,4,4,6,7,6,7,8,9,4,5}, 
{9,8,i,i,i,5,3,1,1,3,3,3,0,2,3,4,5,4,7,3,3,5,6,i,i,i,i,i,i,i,i,i,i,i,i,i},
{11,10,i,i,i,i,i,1,3,4,5,4,2,0,2,4,2,2,4,3,3,5,6,i,i,i,i,i,i,i,i,i,i,i,i,i},
{12,12,i,5,i,i,i,3,5,6,10,7,3,2,0,1,i,i,i,i,6,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i}, 
{13,13,i,5,i,i,i,4,5,6,11,8,4,4,1,0,i,i,i,i,6,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i},
{15,15,i,i,i,i,i,6,i,3,8,8,5,2,i,i,0,4,2,5,6,8,8,16,15,15,14,14,i,i,i,i,i,i,i,i},
{15,i,i,i,i,i,i,i,i,5,7,5,4,2,i,i,4,0,2,2,3,4,4,i,i,i,i,i,i,i,i,i,i,i,i,i},
{18,i,i,i,i,i,i,i,i,12,9,7,7,4,i,i,2,2,0,5,5,6,4,i,i,i,i,i,i,i,i,i,i,i,i,i},
{11,i,i,i,i,i,i,i,i,i,2,3,3,3,6,6,6,3,5,0,1,2,3,i,i,i,i,i,i,i,i,i,i,i,i,i},
{10,12,13,14,10,8,8,9,1,2,2,3,3,3,6,6,6,3,5,1,0,2,4,10,10,9,9,9,12,13,12,13,14,15,6,7},
{i,i,i,i,i,i,i,i,i,i,i,2,5,5,i,i,8,4,6,2,2,0,2,i,i,i,i,i,i,i,i,i,i,i,i,i},
{i,i,i,i,i,i,i,i,i,i,i,3,6,6,i,i,8,4,4,3,4,2,0,i,i,i,i,i,i,i,i,i,i,i,1,2}, 
{i,i,i,i,i,i,i,i,i,i,i,5,i,i,i,i,16,i,i,i,10,i,i,0,1,2,3,5,6,6,7,7,8,8,i,i},
{i,i,i,i,i,i,i,i,i,i,i,5,i,i,i,i,15,i,i,i,10,i,i,1,0,1,2,3,5,5,6,6,7,7,i,i},
{i,i,i,i,i,i,i,i,i,i,i,4,i,i,i,i,15,i,i,i,9,i,i,2,0,1,3,4,4,5,5,6,6,i,i},
{i,i,i,i,i,i,i,i,i,i,i,4,i,i,i,i,14,i,i,i,9,i,i,3,0,2,3,3,4,4,5,5,i,i},
{i,i,i,i,i,i,i,i,i,i,i,4,i,i,i,i,14,i,i,i,9,i,i,5,0,2,2,3,3,4,4,i,i},
{i,i,i,i,i,i,i,i,i,i,i,6,i,i,i,i,i,i,i,i,13,i,i,6,0,1,1,1,1,1,i,i},
{i,i,i,i,i,i,i,i,i,i,i,7,i,i,i,i,i,i,i,i,13,i,i,6,5,4,3,2,1,0,1,1,1,1,i,i},
{i,i,i,i,i,i,i,i,i,i,i,6,i,i,i,i,i,i,i,i,12,i,i,7,6,5,4,3,1,1,0,1,1,1,i,i},
{i,i,i,i,i,i,i,i,i,i,i,7,i,i,i,i,i,i,i,i,13,i,i,7,6,5,4,3,1,1,1,0,1,1,i,i},
{i,i,i,i,i,i,i,i,i,i,i,8,i,i,i,i,i,i,i,i,14,i,i,8,7,6,5,4,1,1,1,1,0,1,i,i},
{i,i,i,i,i,i,i,i,i,i,i,9,i,i,i,i,i,i,i,i,15,i,i,8,7,6,5,4,1,1,1,1,1,0,i,i},
{i,i,i,i,i,i,i,i,i,i,i,4,i,i,i,i,i,i,i,i,6,i,1,i,i,i,i,i,i,i,i,i,i,i,0,2},
{i,i,i,i,i,i,i,i,i,i,i,5,i,i,i,i,i,i,i,i,7,i,2,i,i,i,i,i,i,i,i,i,i,i,2,0}
};
string source,destination;
cout<<"Enter Source"<<endl;
getline(cin,source);
cout<<"Enter Destination"<<endl;
getline(cin,destination);
int s=0,d=0;
bool val=1;
while(Places[s]!=source){
s++;
if(s==Places.size()){
    cout<<"INVALID REQUEST"<<endl;
    val=0;
    break;
}
}
while(Places[d]!=destination){
d++;
if(d==Places.size()){
    cout<<"INVALID REQUEST"<<endl;
    val=0;
    break;
}
}
if(val==1){
dijkstra(adjacencyMatrix,s,Places,d);
}
}
