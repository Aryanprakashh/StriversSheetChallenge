# Write your MySQL query statement below

select p.project_id, round(avg(m.experience_years),2) as average_years 
from project p left join employee m 
on p.employee_id=m.employee_id 
group by p.project_id;