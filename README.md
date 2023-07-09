# NavDTU

### Contributors

* Deepanshu Sharma	(2K21/IT/059)
* Chirag Rana 		(2K21/IT/056)


NAVDTU utilizes the renowned Dijkstra's algorithm to compute the shortest path between the source and destination points on the Delhi Technological University (DTU) campus map. Dijkstra's algorithm, developed by Edsger Dijkstra, is a powerful graph-based algorithm used to find the shortest path in a graph with non-negative edge weights.

In the context of NAVDTU, the algorithm begins by initializing the source point and assigning a tentative distance value of zero to it. All other points on the campus map are assigned an initial tentative distance of infinity.

Next, the algorithm iteratively calculates the tentative distance from the source to each neighboring point, considering the weights of the connecting paths. It selects the point with the smallest tentative distance as the current point and updates the distances of its neighboring points if a shorter path is found.

By repeating this process until all points have been visited, Dijkstra's algorithm gradually determines the shortest path from the source to all other points on the campus map. The algorithm takes into account factors such as road networks, building layouts, and possible one-way paths to accurately determine the optimal route.

NAVDTU leverages this algorithm to provide users with step-by-step directions, ensuring efficient navigation within the DTU campus. By incorporating Dijkstra's algorithm, NAVDTU enhances safety, convenience, and overall navigation experience for students, faculty, and visitors within the campus premises.
