def average_of_even_numbers(array){
    sum = 0.0
    count_of_even_numbers = 0 

        #iterate through each number in the array, and if we encounter an even number we modify sum and count
    array.each do |number| 
        if number.even? 
            sum+=number
            count_of_even_numbers +=1
        end
    end
    return sum/count_of_even_numbers #return mean average
end
}