-- modify for run 4

--start
set autocommit off
@clear_mail
@insert_mail
--1.
select count(*) from zipcodes;

--2.
insert into zipcodes values(1,'A');
--3.
select count(*) from zipcodes;
--4.
select count(*) from none;
--5.
select count(*) from zipcodes;
--6.
insert into zipcodes values(2,'B');
--7.
START none
--8
select count(*) from zipcodes;
--9;
exit