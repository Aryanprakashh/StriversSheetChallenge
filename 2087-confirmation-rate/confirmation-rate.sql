# Write your MySQL query statement below

select e.user_id, round(avg(if(m.action='confirmed',1,0)),2) as confirmation_rate from signups e left join confirmations m 
on e.user_id=m.user_id group by user_id;