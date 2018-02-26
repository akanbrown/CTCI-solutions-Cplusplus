/** Imagine you have a call center with three levels of employees: fresher, technical lead (TL),
 *  product manager (PM). There can be multiple employees, but only one TL or PM.
 * 
 *
 */
 
 #include <iostream>
 
 using namespace std;
 
 int main(){
  printf("Hello world\n");
  system("pause");
  return 0;
  }
  
/** 
public class CallHandler {
static final int LEVELS = 3; // we have 3 levels of employees
static final int NUM_FRESHERS = 5; // we have 5 freshers
ArrayList<Employee>[] employeeLevels = new ArrayList[LEVELS];
// queues for each call’s rank
Qeue<Call>[] callQueues = new LinkedList[LEVELS];
public CallHandler() { ... }
Employee getCallHandler(Call call) {
for (int level = call.rank; level < LEVELS - 1; level++) {
ArrayList<Employee> employeeLevel = employeeLevels[level];
for (Employee emp : employeeLevel) {
if (emp.free) {
return emp;
}
}
}
return null;
}

// routes the call to an available employee, or adds to a queue

**/
