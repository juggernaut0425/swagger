/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Amount.h
 *
 * some description 
 */

#ifndef Amount_H_
#define Amount_H_



#include "Currency.h"
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// some description 
/// </summary>
class  Amount
{
public:
    Amount();
    virtual ~Amount();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// Amount members
    
    /// <summary>
    /// some description 
    /// </summary>
    double getValue() const;
    void setValue(double value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Currency> getCurrency() const;
    void setCurrency(std::shared_ptr<Currency> value);

protected:
    double m_Value;
    std::shared_ptr<Currency> m_Currency;
};

}
}
}
}

#endif /* Amount_H_ */
