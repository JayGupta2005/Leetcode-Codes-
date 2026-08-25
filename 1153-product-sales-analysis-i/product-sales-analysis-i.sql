# Write your MySQL query statement below
SELECT product_name, year, price
FROM SALES AS S
LEFT JOIN PRODUCT AS P
ON S.PRODUCT_ID = P.PRODUCT_ID