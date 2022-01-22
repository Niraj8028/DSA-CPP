var listing_price=800;
var selling_price=199;

var discountpercentage=((listing_price-selling_price)/listing_price)*100;
console.log("discount percentage is "+ discountpercentage);

var displaypercentage=Math.round(discountpercentage);

console.log(displaypercentage+"% off");
