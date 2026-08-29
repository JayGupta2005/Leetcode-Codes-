# Write your MySQL query statement below
DELETE p2
FROM Person AS p1
JOIN Person AS p2
ON p1.email = p2.email
WHERE p2.id > p1.id