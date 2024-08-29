# Write your MySQL query statement below
select unique_id, name from EmployeeUNI right outer join employees on employees.id=EmployeeUNI.id;