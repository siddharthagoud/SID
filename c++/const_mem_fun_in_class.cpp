#include<iostream>
using namespace std;
class StarWars
{
	    public:
		        int i;
			int r;
			    StarWars(int x)    // constructor
				        { 
						        i = x; 
							    }

			        int falcon() const   // constant function
					    { 
						            /* 
							     *             can do anything but will not
							     *                         modify any data members
							     *                                 */
						    //r=10;
						            cout << "Falcon has left the Base";
						    cout<<"i= "<<i<<endl;
						    cout<<"r= "<<r<<endl;
							        }

				    int gamma()
					        { 
							        i++; 
								    }
};

int main()
{
	    StarWars objOne(10);        // non const object
	        const StarWars objTwo(20);      // const object

		    objOne.falcon();     // No error
		        objTwo.falcon();     // No error

			    cout << objOne.i << objTwo.i;

			        objOne.gamma();     // No error
				    //objTwo.gamma();     // Compile time error
}
