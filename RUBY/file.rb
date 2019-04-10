afile=File.new("text.txt","w")
if afile
	afile.syswrite("sorrycvb!")
else 
	puts  "wrong !"
end
afile.close

afile=File.open("text.txt","r")
if afile
	cou=afile.sysread(10)
	puts cou
else 
	puts "wrong !"
end
