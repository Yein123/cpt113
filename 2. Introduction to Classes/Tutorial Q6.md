+------------------+                                        +------------------+                            +------------------+
|    Customer      |                                        |    Package       |                            | Delivery Centre  |
+------------------+                                        +------------------+                            +------------------+
| - VAT number :int|<------                                 | - Unique ID :int |------>                     | - Unique name :string|
| - Name :string   |                                        | - Weight :double |                            | - Address :string|
| - Phone number :int|                                      | - Delivery type :string|                      | - Customers :List<Customer>|
| - Address :string|                                        | - Sender :Customer|                           | - Couriers :List<Courier>|
+------------------+                                        | - Recipient :Customer|                        +------------------+
| + login(username:string, password:string):void|           | + assignCustomer(customer:Customer):void|
| + selectRecipient(name:string):void|                      +------------------+                            | + assignCourier(courier:Courier):void|
| + enterPackageDetails(weight:double, status:string):void| | + generateID():int|                           +------------------+
+------------------+                                        | + assignCourier(courier:Courier):void|
                                                            +------------------+
                                                                    |
                                                                    |
                                                                    v
                                                            +------------------+
                                                            |     Courier      |
                                                            +------------------+
                                                            | - VAT number :int|
                                                            | - Name :string   |
                                                            | - Phone number :int|
                                                            | - Delivery Centre :Delivery Centre|
                                                            +------------------+
                                                            | + deliverPackage(package:Package):void|
                                                            +------------------+