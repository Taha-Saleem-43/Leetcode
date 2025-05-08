Select (
Select distinct(salary)
from Employee
where salary < (Select max(salary) from Employee) 
order by salary DESC
limit 1 ) as SecondHighestSalary;