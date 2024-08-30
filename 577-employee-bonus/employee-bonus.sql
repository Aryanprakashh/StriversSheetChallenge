# Write your MySQL query statement below

select e.name,s.bonus from employee e left outer join bonus s on e.empid=s.empid where s.bonus<1000 or s.bonus is null