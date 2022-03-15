/**
 * Port Drayage Web Service.
 * Web Service for Loading/Unloading/Inspection interactions for Port Drayage Operations.
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIActionStatusList.h
 *
 * 
 */

#ifndef OAIActionStatusList_H
#define OAIActionStatusList_H

#include <QJsonObject>

#include "OAIContainerActionStatus.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIActionStatusList : public OAIObject {
public:
    OAIActionStatusList();
    OAIActionStatusList(QString json);
    ~OAIActionStatusList() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIContainerActionStatus> getActions() const;
    void setActions(const QList<OAIContainerActionStatus> &actions);
    bool is_actions_Set() const;
    bool is_actions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIContainerActionStatus> actions;
    bool m_actions_isSet;
    bool m_actions_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIActionStatusList)

#endif // OAIActionStatusList_H