# Write your MySQL query statement below
SELECT MAX(num) AS num 
FROM MYNUMBERS
WHERE num IN (
    SELECT num
    FROM MYNUMBERS
    GROUP BY num
    HAVING COUNT(NUM) = 1
)
