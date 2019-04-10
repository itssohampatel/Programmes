print "Enter you day: "
day=gets.chomp
case day
when "sunday"
   puts "1"
when "monday"
   puts "2"
when "saturday"
   puts "7"
when "friday"
   puts "6"
else 
   puts "out_of_bound"
end
