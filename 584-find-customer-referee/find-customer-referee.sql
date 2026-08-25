# Write your MySQL query statement below
Select name
from Customer 
where referee_id != 2 
UNION ALL
Select name
from Customer 
where referee_id is null