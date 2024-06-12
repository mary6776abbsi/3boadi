#include <iostream>
#include <cmath>
using namespace std;

// Define a structure for 3D points
struct Point3D {
    double x;
    double y;
    double z;
};

// Function to input points
void inputPoint(Point3D& point, const string& pointName) {
    cout << "Enter coordinates for point " << pointName << " (x y z): ";
    cin >> point.x >> point.y >> point.z;
}

// Function to calculate distance between two points
double distance(const Point3D& p1, const Point3D& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

// Function to check if two points lie on the same plane
bool samePlane(const Point3D& p1, const Point3D& p2) {
    return (p1.z == p2.z);
}

int main() {
    Point3D point1, point2;

    // Input two points
    inputPoint(point1, "1");
    inputPoint(point2, "2");

    // Calculate and print distance between the points
    cout << "Distance between the two points: " << distance(point1, point2) << endl;

    // Check if the points lie on the same plane and print result
    if (samePlane(point1, point2)) {
        cout << "The two points lie on the same plane." << endl;
    }
    else {
        cout << "The two points do not lie on the same plane." << endl;
    }

    return 0;
}
